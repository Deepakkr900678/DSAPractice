// class Solution
// {
// public:
//     vector<int> findWordsContaining(vector<string> &words, char x)
//     {
//         vector<int> ans;
//         int size = words.size();

//         for (int i = 0; i < size; i++)
//         {
//             string value = words[i];
//             int valueSize = value.length();
//             for (int j = 0; i < valueSize; j++)
//             {
//                 if (x == value[j])
//                 {
//                     ans.push_back(i);
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     vector<int> findWordsContaining(vector<string> &words, char x)
//     {
//         vector<int> ans;
//         int size = words.size();

//         for (int i = 0; i < size; i++)
//         {
//             string value = words[i];
//             int valueSize = value.length();

//             for (int j = 0; j < valueSize; j++)
//             {
//                 if (x == value[j])
//                 {
//                     ans.push_back(i); // Push index i, not the word itself
//                     break;            // Once found, break the inner loop
//                 }
//             }
//         }
//         return ans;
//     }
// };

