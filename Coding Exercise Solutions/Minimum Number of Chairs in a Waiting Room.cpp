class Solution {
public:
    int minimumChairs(string s) {

        int current_chairs = 0;
        int max_chairs_needed = 0;
        
        for (char event : s) {
            if (event == 'E') {
                current_chairs++;
            } else if (event == 'L') {
                current_chairs--;
            }
            
            // Update max_chairs_needed to keep track of the peak value of current_chairs
            max_chairs_needed = max(max_chairs_needed, current_chairs);
        }
        
        return max_chairs_needed;
    }
};
