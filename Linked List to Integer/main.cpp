/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {

    int ans = 0; 
    while (node != NULL){
        ans += node->val;
        ans *= 2;
        node = node-> next;
    } 
    
    return ans/2;

    
}

// int solve(LLNode* node) {
//     int num = 0;

//     while (node != NULL) {
//         num = num * 2 + node->val;
//         node = node->next;
//     }
//     return num;
// }