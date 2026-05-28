# Detect Linked List Cycle

## Task Overview

A singly linked list is made up of nodes where each node holds a value and a reference to the next node in the chain. In a well-formed list the last node's `next` is null, meaning the chain ends. However, if a buggy process links the tail back to some earlier node, the chain loops forever — any code that simply walks `node = node.next` until `next` is null will spin indefinitely.

Given the head of a singly linked list, return `true` if following the `next` pointers eventually brings you back to a node you have already visited, and `false` if the chain ends cleanly at null. The list may be empty, in which case return `false`. Your solution must not allocate extra memory that grows with the length of the list.

The `ListNode` type and a `build_list` helper are already defined in your chosen language's test file — you do not need to write them. Implement `has_cycle` in your chosen language.

## Examples

**Example 1:**

```
3 → 2 → 0 → -4
     ↑_________|
```

**Input:** head of list [3, 2, 0, -4] with tail linked back to index 1

**Output:** true

**Explanation:** The node with value -4 points back to the node with value 2, creating a cycle. Following `next` from any node in the loop will never reach null.

---

**Example 2:**

**Input:** head of list [1, 2] with tail linked back to index 0

**Output:** true

**Explanation:** The second node points back to the first, forming a two-node cycle.

---

**Example 3:**

**Input:** head of list [1] with no cycle (pos = -1)

**Output:** false

**Explanation:** There is only one node and its `next` is null, so the chain ends immediately with no cycle.

---

**Example 4:**

**Input:** head of an empty list

**Output:** false

**Explanation:** There are no nodes at all, so there is no cycle.

## Constraints

- `0 <= number of nodes <= 10^6`
- `-10^5 <= Node.val <= 10^5`
- `head` may be null / None (empty list) — return `false`.
- A single node with `next = null` has no cycle — return `false`.
- A single node whose `next` points to itself has a cycle — return `true`.
- The cycle entry index, if present, is in the range `[0, n-1]`.
- **O(n) time** is expected.
- **O(1) auxiliary space** is required — solutions whose memory usage grows with the number of nodes will fail the committed memory-budget test.

## How to Verify

- Open the `solution.*` file inside your chosen language folder and implement `has_cycle` there — do not edit the test file.
- **Python:** run `pytest` from inside the `python/` folder.
- **JavaScript:** run `npm test` from inside the `javascript/` folder.
- **TypeScript:** run `npm test` from inside the `typescript/` folder.
- **Java:** run `mvn test` from inside the `java/` folder.
- **C++:** run `make test` from inside the `cpp/` folder.
- All tests in your chosen folder must pass; only standard library and built-in primitives may be used.