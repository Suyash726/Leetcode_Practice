class Solution {
public:
    double angleClock(int hour, int minutes) {
        double degree = abs(minutes*6 - (hour*30 + minutes*0.5));
        degree = min(degree, 360-degree);
        return degree;
    }
};
