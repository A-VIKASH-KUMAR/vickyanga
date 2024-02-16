
const nums1 = [1,1,1,3,3,4,3,2,4,2];
const nums =[1,2,3,7,6,5]

// Approach 1
const ifDuplicatesPresent1 = (nums) => {
nums.sort();
for (let i = 0; i < nums.length - 1; i++) {
    const element = nums[i];
    if (element === nums[i+1]) {
        return true;
    }
}
console.log("nums1", nums);
return false;
}
console.log(ifDuplicatesPresent1(nums));

// Approach 2
const ifDuplicatesPresent2 = (nums) => {
return nums.length !== new Set(nums).size
}

console.log("nums", ifDuplicatesPresent2(nums));