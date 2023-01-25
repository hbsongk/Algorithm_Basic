push_back(v[i]);
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> s;
        v.push_back(s[0]); // 앞글자만 다 담음
    }
    count();
    sort(v2.begin(), v2.end());
    for(char c : v2)
        list += c;
    if(list=="")
        cout << "PREDAJA";
    cout << list;
    return 0;
}