        
        else {

         
            if (yCenter >= y2) {
                return yCenter - y2 <= radius;
            }

            else if (yCenter <= y1) {
                return y1 - yCenter <= radius;
            }

           
            else {
                return true;
            }
        }

        return false;
    }
};
