// https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=problem-list-v2&envId=sliding-window
double findMaxAverage(int* nums, int numsSize, int k) {
    int left = 0;
    int right = 0;
    double max = -9999;
    int sum = 0;

    for (; right < k; right++)
    {
        sum += nums[right];
    }
    max = sum;
    for (; right < numsSize; right++ && left++)
    {
        sum = sum - nums[left] + nums[right];
        if (sum > max)
            max = sum;
    }
    if (numsSize == 1)
        max = nums[0];
    return max / k;
}
