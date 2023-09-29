package InterviewQuestionsJava;
import java.util.Arrays;
 class RemoveElement {

	public static void main(String[] args)
	{
		int[] nums = {3,2,2,3};
		int val =3;
		//int[] nums = {0,1,2,2,3,0,4,2};
		//int val =2;
		System.out.println ( removeElement(nums,val));

	}
	/*
	static int removeElement(int nums[], int val)
	{
		
		int count = 0;
		for (int i = 0; i<nums.length;i++) 
		{
		if (nums[i]!= val) 
		{
			nums[count] =nums [i];
			count++;
		}	
		}
		return count;
	}
	

}
*/
	
	
    static int removeElement(int[] nums, int val) {
        int end = nums.length-1;
        int start =0;
        while (start <= end)
        {
            if (nums[end]==val)
            {
                end--;
            }
            else 
            {
                if (nums[start]==val)
                {
                    int temp = nums[end];
                    nums[end]= nums[start];
                    nums[start]= temp;
                    end--;
                }
                else
                {
                    start++;
                }
            }
        }
        return end+1;
    }
}
	
	
	
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     