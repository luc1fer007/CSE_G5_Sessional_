# Doubly Linked List – Insert at Any Position (0-Based Indexing)

This algorithm inserts a new node with a given value (`ITEM`) at a specified position (`POS`) in a doubly linked list. It handles insertion at the **start**, **middle**, and **end** of the list using a single traversal loop.

---

## Algorithm: `INSERT_AT_POSITION(HEAD, ITEM, POS)`

**Input:**

- `HEAD` → pointer to the first node of the doubly linked list  
- `ITEM` → value to insert  
- `POS` → 0-based position to insert  

**Output:**

- Updated `HEAD`  

---

### Steps:

1. Create a new node `NEW_NODE` with `ITEM`.  
2. Set `NEW_NODE → NEXT := NULL` and `NEW_NODE → PREV := NULL`.  

3. **[Start Case]**  
   - If `POS = 0`, then:  
     - `NEW_NODE → NEXT := HEAD`  
     - If `HEAD ≠ NULL`, set `HEAD → PREV := NEW_NODE`  
     - Set `HEAD := NEW_NODE`  
     - Return `HEAD`  

4. **[Traverse to node before insertion]**  
   - Set `CURR := HEAD`  
   - For `i := 0` to `POS - 2`, do:  
     - If `CURR → NEXT = NULL`, break  (insert at end)  
     - Set `CURR := CURR → NEXT`  
   - [End For]  

5. **[Insert the new node after CURR]**  
   - Set `NEW_NODE → NEXT := CURR → NEXT`  
   - If `CURR → NEXT ≠ NULL`, set `CURR → NEXT → PREV := NEW_NODE`  
   - Set `CURR → NEXT := NEW_NODE`  
   - Set `NEW_NODE → PREV := CURR`  

6. Return `HEAD`  

---

### Variables Used

| Variable    | Purpose |
|------------|---------|
| `HEAD`     | Pointer to first node of the list (updated if insertion at start) |
| `ITEM`     | Value to insert into the list |
| `POS`      | 0-based position where the new node should be inserted |
| `NEW_NODE` | Newly created node holding `ITEM` |
| `CURR`     | Traversal pointer to reach the node before insertion |
| `i`        | Loop counter for traversal |

---

### Notes

- Handles **start, middle, and end** insertion with one traversal loop.  
- Fully **0-based indexing**.  
- No separate length calculation required.  
- If `POS` is greater than the current list length, the new node is inserted at the **end**.


#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

// Function to insert at given 0-based position
Node *insertAtPosition(Node *head, int item, int pos)
{
    Node *new_node = new Node(item);

    // [Start Case] -> insert at beginning
    if (pos == 0)
    {
        new_node->next = head;
        if (head != nullptr)
            head->prev = new_node;
        head = new_node;
        return head;
    }

    Node *curr = head;

    // Traverse to the node just before the insertion point
    for (int i = 0; i < pos - 1; i++)
    {
        if (curr->next == nullptr) // insert at end if pos > current length
            break;
        curr = curr->next;
    }

    // Insert the new node
    new_node->next = curr->next;
    if (curr->next != nullptr)
        curr->next->prev = new_node;

    curr->next = new_node;
    new_node->prev = curr;

    return head;
}

// Function to print list
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
    // Initial list: 10 <-> 20 <-> 30
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    cout << "Original list: ";
    printList(head);

    // Insert examples
    head = insertAtPosition(head, 5, 0);   // start
    head = insertAtPosition(head, 25, 3);  // middle
    head = insertAtPosition(head, 40, 10); // end (pos > length)

    cout << "Updated list: ";
    printList(head);

    return 0;
}
