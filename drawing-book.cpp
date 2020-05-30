/* challenge link -> http://hr.gs/fadcab

from p1 to p4  2 pages turned                  from n to p4  3 pages turned

               p1                                            p1
                      1 page turned-
        p2     p3                                      p2    p3
                      2 pages turned-                            2 pages turned
        p4     p5                                      p4    p5
                      3 pages turned-                            1 page turned
        p6     p7                                      p6    p7

*/

int pageCount(int n, int p) {
    /*
     * Write your code here.*/
     int pagesTurnedFromLeftToRight = 0;
     int pagesTurnedFromRightToLeft = 0;

     //if p not an even number(located on left) p->the previous one
     if (p % 2 != 0){p-=1; }

     //case number one starting from left to right ( p1)
     pagesTurnedFromLeftToRight = p / 2;

     //case number two starting from right to left (n)
     pagesTurnedFromRightToLeft = (n - p) / 2;

     if (pagesTurnedFromLeftToRight <= pagesTurnedFromRightToLeft )
     return pagesTurnedFromLeftToRight;
     else
     return pagesTurnedFromRightToLeft;

}
