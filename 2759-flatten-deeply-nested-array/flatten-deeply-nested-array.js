/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, n) {
    let res = []
    const Flatten = (arr, depth)=>{
    for(let i = 0; i < arr.length; i++) {
    if (Array.isArray(arr[i]) && depth<n){
    Flatten(arr[i],depth+1)
    }
    else{
    res.push(arr[i])
    }
    }
    return res
    }
    return Flatten(arr,0)  
};