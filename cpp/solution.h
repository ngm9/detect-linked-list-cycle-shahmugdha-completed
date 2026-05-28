#pragma once

struct ListNode {
    int val;
    ListNode* next;
    explicit ListNode(int v) : val(v), next(nullptr) {}
};

bool hasCycle(ListNode* head);
