
        if(x < 0) return false;

        long long reverse = 0;
        int temp = x;

        while(temp != 0)
        {
            int remainder = temp % 10;
            reverse = reverse * 10 + remainder;
            temp = temp / 10;
        }

        return x == reverse;
    }
};
