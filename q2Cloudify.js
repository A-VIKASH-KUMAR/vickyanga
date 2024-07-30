const nums = [2, 7, 11, 15];
const target = 13;

const returnIndexes = (nums, target) => {
  const result = [];
  let j = 0;
  for (let i = 0; i < nums.length - 1; i++) {
    const complement = target - nums[i];
    if (complement === nums[i + 1]) {
      result.push(i, i + 1);
    }
  }
  return result;
};

const returnIndexes2 = (nums, target) => {
  const result = [];
//   let j = 0;
  for (let i = 0; i < nums.length - 1; i++) {
    const complement = target - nums[i];
    if (nums[i + 1] === complement) {
      result.push(i, j + 1);
    }
    if (nums[i] === target - nums[nums.length -1 - i]) {
        result.push(i, nums.length -1 - i)
    }
  }
  return result;
};

console.log(returnIndexes2(nums, target));
