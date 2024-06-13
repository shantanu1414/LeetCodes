/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let val=init;
    for(let x=0;x<nums.length;x++)
    {
        val=fn(val,nums[x])
    }
    return val;
};