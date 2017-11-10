/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
  
    int indexi = 0;
    int indexj = 0;
    int* result = (int *)malloc(sizeof(int)*2);
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
                indexi = i ;
                indexj = j ;
			}
		}
	}
    result[0] = indexi;
    result[1] = indexj;
    return result;


}
