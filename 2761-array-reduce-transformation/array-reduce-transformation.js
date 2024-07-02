/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    res = init
    for(let x = 0;x<nums.length;x++){
        res = fn(res,nums[x]);
    }
    return res;
};