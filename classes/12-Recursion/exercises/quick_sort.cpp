class Solution {
public:
	int partion(vector<int>& nums, int head, int tail) {
		int pivot = tail;

		for (int i = tail; i >= head; i--) {
			if (nums.at(i) >= nums.at(pivot)) {
				int tmp = nums.at(i);

				for (int j = i; j < pivot; j++) {
					nums.at(j) = nums.at(j+1);

				}
				nums.at(pivot) = tmp;
				pivot -= 1;
			}
		}
		return pivot;
	}

	void quick_sort(vector<int>& nums, int head, int tail) {
		if (head < tail) {
			int pivot = partion(nums, head, tail);
			quick_sort(nums, head, pivot - 1);
			quick_sort(nums, pivot + 1, tail);
		}
	}

	void sortColors(vector<int>& nums) {
		quick_sort(nums, 0, nums.size() - 1);
	}
};
