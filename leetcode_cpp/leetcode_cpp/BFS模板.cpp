//// �������� start ���յ� target ���������
//int BFS(Node start, Node target) {
//    Queue<Node> q; // �������ݽṹ
//    Set<Node> visited; // �����߻�ͷ·
//
//    q.offer(start); // �����������
//    visited.add(start); 
//    int step = 0; // ��¼��ɢ�Ĳ���
//
//    while (q not empty) {
//        int sz = q.size();
//        /* ����ǰ�����е����нڵ���������ɢ */
//        for (int i = 0; i < sz; i++) {
//            Node cur = q.poll();
//            /* ���ص㣺�����ж��Ƿ񵽴��յ� */
//            if (cur is target)
//                return step;
//            /* �� cur �����ڽڵ������� */
//            for (Node x : cur.adj()) {
//                if (x not in visited) {
//                    q.offer(x);
//                    visited.add(x);
//                }
//            }
//        }
//        /* ���ص㣺���²��������� */
//        step++;
//    }
//}