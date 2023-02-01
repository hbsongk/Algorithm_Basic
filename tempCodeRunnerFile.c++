    cin >> n;
    for (int i = 0; i < n;i++){
        float p = pow(10, n-i-1);
        int a = s[i % 4] - '0';
        sum += a * p;
    }