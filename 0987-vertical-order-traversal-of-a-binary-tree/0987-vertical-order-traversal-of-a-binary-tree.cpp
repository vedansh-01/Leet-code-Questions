class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*, pair<int,int>>> q;
        map<int, map<int, multiset<int>>> mp;

        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto p = q.front();
            q.pop();

            TreeNode* curr = p.first;
            int col = p.second.first;
            int row = p.second.second;

            mp[col][row].insert(curr->val);

            if (curr->left)
                q.push({curr->left, {col - 1, row + 1}});

            if (curr->right)
                q.push({curr->right, {col + 1, row + 1}});
        }

        vector<vector<int>> ans;

        for (auto &i : mp) {
            vector<int> temp;
            for (auto &j : i.second) {
                temp.insert(temp.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(temp);
        }

        return ans;
    }
};