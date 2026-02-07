# Doubly Linked List – Delete at Any Position (0-Based Indexing)

This algorithm deletes a node at a specified position (`POS`) in a doubly linked list. It handles deletion at the **start**, **middle**, and **end** of the list using a single traversal loop.

---

## Algorithm: `DELETE_AT_POSITION(HEAD, POS)`

**Input:**

- `HEAD` → pointer to the first node of the doubly linked list  
- `POS` → 0-based position of the node to delete  

**Output:**

- Updated `HEAD`  

---

### Steps:

1. If `HEAD = NULL`, return `HEAD` (list is empty).  

2. **[Start Case]**  
   - If `POS = 0`, then:  
     - Set `CURR := HEAD`  
     - Set `HEAD := HEAD → NEXT`  
     - If `HEAD ≠ NULL`, set `HEAD → PREV := NULL`  
     - Delete `CURR`  
     - Return `HEAD`  

3. **[Traverse to node before deletion]**  
   - Set `CURR := HEAD`  
   - For `i := 0` to `POS - 2`, do:  
     - If `CURR → NEXT = NULL`, break  (position beyond list length)  
     - Set `CURR := CURR → NEXT`  
   - [End For]  

4. **[Delete the node after CURR]**  
   - If `CURR → NEXT = NULL`, return `HEAD` (position beyond list length)  
   - Set `NODE_TO_DELETE := CURR → NEXT`  
   - Set `CURR → NEXT := NODE_TO_DELETE → NEXT`  
   - If `CURR → NEXT ≠ NULL`, set `CURR → NEXT → PREV := CURR`  
   - Delete `NODE_TO_DELETE`  

5. Return `HEAD`  

---

### Variables Used

| Variable    | Purpose |
|------------|---------|
| `HEAD`     | Pointer to first node of the list (updated if deletion at start) |
| `POS`      | 0-based position of node to delete |
| `CURR`     | Traversal pointer to reach the node before deletion |
| `NODE_TO_DELETE` | Node to be deleted after CURR |
| `i`        | Loop counter for traversal |

---

### Notes

- Handles **start, middle, and end** deletion with one traversal loop.  
- Fully **0-based indexing**.  
- If `POS` is greater than the current list length, the list remains unchanged.

  
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int item)
    {
        data = item;
        next = nullptr;
        prev = nullptr;
    }
};

// Function to delete a node at any position (0-based)
Node *deleteAtPosition(Node *head, int pos)
{
    if (head == nullptr) // Empty list
        return head;

    // [Start Case] -> delete first node
    if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
            head->prev = nullptr;
        delete temp;
        return head;
    }

    Node *curr = head;

    // Traverse to the node just before the one to delete
    for (int i = 0; i < pos - 1; i++)
    {
        if (curr->next == nullptr) // Position beyond list length
            return head;
        curr = curr->next;
    }

    Node *temp = curr->next;
    if (temp == nullptr) // Position beyond list length
        return head;

    // Update links to remove temp
    curr->next = temp->next;
    if (temp->next != nullptr)
        temp->next->prev = curr;

    delete temp;

    return head;
}

// Function to print the list
void printList(Node *head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data;
        if (curr->next != nullptr)
            cout << " <-> ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    // Initial doubly linked list: 10 <-> 20 <-> 30 <-> 40
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;

    cout << "Original list: ";
    printList(head);

    // Delete examples
    head = deleteAtPosition(head, 0);  // delete start
    head = deleteAtPosition(head, 2);  // delete middle (original index 3)
    head = deleteAtPosition(head, 10); // delete beyond length (does nothing)

    cout << "Updated list: ";
    printList(head);

    return 0;
}
