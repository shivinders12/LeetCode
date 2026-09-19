
                return dx * dx + dy * dy <= radius * radius;
            }

     

          
            else if (yCenter <= y1) {
                int dx = x1 - xCenter;
                int dy = y1 - yCenter;

       
            if (yCenter >= y2) {
                int dx = x1 - xCenter;
                int dy = yCenter - y2;

                return dx * dx + dy * dy <= radius * radius;
            }
public:
    bool checkOverlap(int radius, int xCenter, int yCenter,
                      int x1, int y1, int x2, int y2) {

        
        if (xCenter <= x1) {
            else {
                return x1 - xCenter <= radius;
