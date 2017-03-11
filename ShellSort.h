#define _CRT_SECURE_NO_WARNINGS
#pragma once
//
//template<class T>
//void ShellSort(T arr[],size_t size)
//{
//	int gap = size/3+1;
//	while (gap>0)
//	{
//		for(int idx = gap; idx<size; ++idx)
//		{
//			int temp = arr[idx];
//			int end = idx -gap;
//			while (end>=0 && arr[end]>temp)
//			{
//				arr[end+gap] = arr[end];
//				end -=gap;
//			}
//			arr[end+gap] = temp;
//		}
//		--gap;
//	}
//}

template<class T>
void InsertSort(T arr[],size_t size)
{
	int left = 0;
	int right = 0;
    
	for(int idx = 1; idx<size; ++idx)
		{
			int pos =0;
			int temp = arr[idx];
			int end = idx-1;
			left = 0;
			right = end;
			while (left<=right)
			{
				int mid = left+((right-left)>>1);
				if(temp<arr[mid])
				{
					right = mid-1;
				}
				else
				{
					left = mid+1;
				}
			}
			for( pos = idx; pos>left;--pos)
			{
				arr[pos] = arr[pos-1];
			}
			arr[left] = temp;
		}
}
