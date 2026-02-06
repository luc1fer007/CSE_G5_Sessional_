# 📌 Huffman Coding – Greedy Algorithm

Huffman Coding is a lossless data compression algorithm that uses a greedy strategy to construct an optimal prefix-free binary tree based on character frequencies.

## 🧠 Greedy Idea
At each step, the algorithm selects the two nodes with the smallest frequencies and merges them.
This greedy choice ensures minimum total weighted path length.

## ✅ Algorithm Steps
1. Create a min-heap (priority queue) containing all characters with their frequencies.

2. While the heap size is greater than 1:
   a. Remove the node with the smallest frequency → x
   b. Remove the node with the next smallest frequency → y
   c. Create a new node z

      z.freq = x.freq + y.freq  
      z.left = x  
      z.right = y  

   d. Insert node z back into the min-heap.

3. The remaining node in the heap becomes the root of the Huffman Tree.

## 🌳 Code Generation
Left edge → 0  
Right edge → 1  

Trace from root to leaf to obtain codes.

## ⭐ Key Properties
- Prefix-free codes  
- Optimal compression  
- Based on Greedy Algorithm  
- Time Complexity: O(n log n)

## 📌 Applications
- File compression (ZIP, GZIP)
- Multimedia encoding
- Network data transmission

Author: Lucifer
