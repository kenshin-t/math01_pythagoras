#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let a, b, c;
    while (notQuit) {
        //���a�ƍ���b����Εӂ̒���c�����߂�
        a = mathMouseX;
        b = mathMouseY;
        c = sqrt( a * a + b * b );

        clear(140);
        //XY��
        mathAxis(4.1);
        //���p�O�p�`
        stroke(160, 200, 250);
        strokeWeight(4);
        mathLine(0, 0, a, b);
        mathLine(0, 0, a, 0);
        mathLine(a, 0, a, b);
        //����
        textSize(50);
        fill(255, 200, 200);
        text("���=" + a, 0, 60);
        text("����=" + b, 0, 120);
        fill(255, 255, 200);
        text("�Ε�=" + c, 0, 180);
    }
}