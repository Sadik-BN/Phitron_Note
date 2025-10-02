#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &a, int val)
{
    a.push_back(val);

    int cur_idx = a.size() - 1;

    while (true)
    {
        if (cur_idx == 0)
            break;
        int par_idx = (cur_idx - 1) / 2;
        if (a[cur_idx] > a[par_idx])
        {
            swap(a[par_idx], a[cur_idx]);
        }
        else
            break;

        cur_idx = par_idx;
    }
}
void print_heap(vector<int> v)
{
    for (int a : v)
    {
        cout << a << " ";
    }
}
// heap এর ভ্যালু delete করার একটি ফাংশন তৈরি করা হলো
void delete_heap(vector<int> &v)
{
    // যেহেতু Root এ সবচেয়ে বড় ভ্যালু থাকে এবং তা ডিলিট করতে হবে
    v[0] = v[v.size() - 1]; // তাই ভেক্টরের শেষ index এর ভ্যালুটি root অর্থাৎ 0th index এ রাখা হলো
    v.pop_back();           // যেহেতু শেষ ভ্যালুটি স্টোর করা হয়েছে তাই শেষ index টি ডিলিট করে দেয়া হলো

    // এইবার 0th index এ সবচেয়ে বড় ভ্যালুটি নিয়ে আসার পালা।
    int cur = 0;                 // কম্পারিজনের জন্য cur এর ভ্যালু 0 ধরে নিয়ে নিলাম। যা মুলত 0th index বুঝাচ্ছে
    int last_idx = v.size() - 1; // বর্তমানে Node সংখ্যা কত তা বের করে নেয়া হচ্ছে ,  vector এর last index হবে তার চেয়ে এক কম।
    while (true)

    {
        int left_idx = cur * 2 + 1;
        // cur এর left child কোন ইন্ডেক্সে থাকবে তা বের করা হয়েছে
        int right_idx = cur * 2 + 2; // cur এর right child কোন ইন্ডেক্সে থাকবে তা বের করা হয়েছে

        if (left_idx <= last_idx && right_idx <= last_idx) // চেক করা হচ্ছে , উক্ত Node এর left এবং right child দুইটাই আছে কিনা

        {
            // যদি দুইটি থাকে
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur]) // চেক করা হচ্ছে left child এর যে ভ্যালু আছে তা right child থেকে এবং curNode (parent)  থেকে বড় কিনা

            {
                // যদি left child এর ভ্যালু বড় হয় তবে তা swap করতে হবে
                swap(v[left_idx], v[cur]);

                cur = left_idx; // যেহেতু swap করা হয়েছে , তাই এখন cur node চলে গেছে left child এর প্লেসে। তাই cur এ left index এর ভ্যালু রাখা হয়েছে
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur]) // চেক করা হচ্ছে right child এর যে ভ্যালু আছে তা left child থেকে এবং curNode (parent)  থেকে বড় কিনা

            {
                // যদি right child এর ভ্যালু বড় হয় তবে তা swap করতে হবে
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            { // যদি left child এবং right child কেও curNode থেকে বড় না হয় তবে সেক্ষেত্রে কারো সাথে কম্পেয়ার করতে হবে না। কম্পারিজন এখানে শেষ
                break;
            }
        }
        // যদি শুধু মাত্র left child থাকে
        else if (left_idx <= last_idx)

        {
            // left child এর সাথে curNode এর কম্পেয়ার করা হবে
            if (v[left_idx] > v[cur])

            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else // যদি curNode এর ভ্যালু বড় হয় তবে সেক্ষেত্রে আর কম্পারিজন করতে হবে না

            {
                break;
            }
        }
        // যদি শুধু মাত্র right child থাকে
        else if (right_idx <= last_idx)

        {
            // right child এর সাথে curNode এর কম্পেয়ার করা হবে
            if (v[right_idx] > v[cur])

            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else // // যদি curNode এর ভ্যালু বড় হয় তবে সেক্ষেত্রে আর কম্পারিজন করতে হবে না

            {
                break;
            }
        }
        else // যদি left child বা right child কেও না থাকে তবে সেক্ষেত্রে কোনো comparison না করে ব্রেক করতে হবে

        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)

    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    print_heap(v);
    delete_heap(v);
    cout<<endl;
    print_heap(v);
    return 0;
}
