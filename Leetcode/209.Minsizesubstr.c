int minSubArrayLen(int target, int* nums, int numsSize) {
    int sum = 0;
    int left = 0;
    int right = 0;
    int min = 9999;
    for (; right < numsSize - 1 || left < right - 1;)
    {
        if (sum < target)
        {
            sum += nums[right];
            if (right + 1 < numsSize)
                right++;
        }
        else if (sum >= target && right - left < min)
        {
            min = right - left;
            sum -= nums[left];
            left++;
        }
        else if (sum >= target && right - left >= min)
        {
            sum -= nums[left];
            left++;
        }
        printf("%d %d %d %d\n", left, right, min, sum);
    }
    return min++;
}