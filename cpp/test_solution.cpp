#include <cassert>
#include <vector>
#include <iostream>
#include "solution.h"

static ListNode* buildList(const std::vector<int>& values, int pos) {
    if (values.empty()) return nullptr;
    std::vector<ListNode*> nodes;
    nodes.reserve(values.size());
    for (int v : values) {
        nodes.push_back(new ListNode(v));
    }
    for (size_t i = 0; i + 1 < nodes.size(); ++i) {
        nodes[i]->next = nodes[i + 1];
    }
    if (pos >= 0) {
        nodes.back()->next = nodes[static_cast<size_t>(pos)];
    }
    return nodes[0];
}

int main() {
    std::vector<int> vals1 = {3, 2, 0, -4};
    ListNode* h1 = buildList(vals1, 1);
    assert(hasCycle(h1) == true);

    std::vector<int> vals2 = {1, 2};
    ListNode* h2 = buildList(vals2, 0);
    assert(hasCycle(h2) == true);

    std::vector<int> vals3 = {1};
    ListNode* h3 = buildList(vals3, -1);
    assert(hasCycle(h3) == false);

    std::vector<int> vals4;
    ListNode* h4 = buildList(vals4, -1);
    assert(hasCycle(h4) == false);

    std::cout << "All tests passed" << std::endl;
    return 0;
}
