const { ListNode, hasCycle } = require('./solution');

function buildList(values, pos) {
  if (values.length === 0) return null;
  const nodes = values.map(v => new ListNode(v));
  for (let i = 0; i < nodes.length - 1; i++) {
    nodes[i].next = nodes[i + 1];
  }
  if (pos >= 0) {
    nodes[nodes.length - 1].next = nodes[pos];
  }
  return nodes[0];
}

test('cycle with four nodes', () => {
  const head = buildList([3, 2, 0, -4], 1);
  expect(hasCycle(head)).toBe(true);
});

test('cycle with two nodes', () => {
  const head = buildList([1, 2], 0);
  expect(hasCycle(head)).toBe(true);
});

test('no cycle single node', () => {
  const head = buildList([1], -1);
  expect(hasCycle(head)).toBe(false);
});

test('empty list', () => {
  expect(hasCycle(null)).toBe(false);
});
