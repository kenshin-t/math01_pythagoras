#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let a, b, c;
    while (notQuit) {
        //ęĶaÆŗbŠįÎĶĖˇŗcđßé
        a = mathMouseX;
        b = mathMouseY;
        c = sqrt( a * a + b * b );

        clear(140);
        //XY˛
        mathAxis(4.1);
        //ŧpOp`
        stroke(160, 200, 250);
        strokeWeight(4);
        mathLine(0, 0, a, b);
        mathLine(0, 0, a, 0);
        mathLine(a, 0, a, b);
        //ļ
        textSize(50);
        fill(255, 200, 200);
        text("ęĶ=" + a, 0, 60);
        text("ŗ=" + b, 0, 120);
        fill(255, 255, 200);
        text("ÎĶ=" + c, 0, 180);
    }
}