import pytest
from solution import ListNode, has_cycle


def build_list(values, pos):
    if not values:
        return None
    nodes = [ListNode(v) for v in values]
    for i in range(len(nodes) - 1):
        nodes[i].next = nodes[i + 1]
    if pos >= 0:
        nodes[-1].next = nodes[pos]
    return nodes[0]


def test_cycle_four_nodes():
    head = build_list([3, 2, 0, -4], pos=1)
    assert has_cycle(head) is True


def test_cycle_two_nodes():
    head = build_list([1, 2], pos=0)
    assert has_cycle(head) is True


def test_no_cycle_single_node():
    head = build_list([1], pos=-1)
    assert has_cycle(head) is False


def test_empty_list():
    assert has_cycle(None) is False
