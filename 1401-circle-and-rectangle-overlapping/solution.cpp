
     
    //             int dy = y1 - yCenter;

    //             return dx * dx + dy * dy <= radius * radius;
    //         }
    //             int dx = x1 - xCenter;
    //         else if (yCenter <= y1) {
          


    //             return dx * dx + dy * dy <= radius * radius;
    //         }
        
    //     if (xCenter <= x1) {

       
    //         if (yCenter >= y2) {
    //             int dx = x1 - xCenter;
    //             int dy = yCenter - y2;
class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter,
                      int x1, int y1, int x2, int y2) {

