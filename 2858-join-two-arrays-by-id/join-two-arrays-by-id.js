/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    return Object.values([...arr1,...arr2].reduce((map,a)=>(map[a.id] = {...map[a.id],...a}) && map,{}));
};