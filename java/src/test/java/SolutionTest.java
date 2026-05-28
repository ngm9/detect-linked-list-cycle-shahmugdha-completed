import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class SolutionTest {

    private Solution.ListNode buildList(int[] values, int pos) {
        if (values.length == 0) return null;
        Solution.ListNode[] nodes = new Solution.ListNode[values.length];
        for (int i = 0; i < values.length; i++) {
            nodes[i] = new Solution.ListNode(values[i]);
        }
        for (int i = 0; i < values.length - 1; i++) {
            nodes[i].next = nodes[i + 1];
        }
        if (pos >= 0) {
            nodes[values.length - 1].next = nodes[pos];
        }
        return nodes[0];
    }

    @Test
    void testCycleFourNodes() {
        Solution.ListNode head = buildList(new int[]{3, 2, 0, -4}, 1);
        assertTrue(new Solution().hasCycle(head));
    }

    @Test
    void testCycleTwoNodes() {
        Solution.ListNode head = buildList(new int[]{1, 2}, 0);
        assertTrue(new Solution().hasCycle(head));
    }

    @Test
    void testNoCycleSingleNode() {
        Solution.ListNode head = buildList(new int[]{1}, -1);
        assertFalse(new Solution().hasCycle(head));
    }

    @Test
    void testEmptyList() {
        assertFalse(new Solution().hasCycle(null));
    }
}
