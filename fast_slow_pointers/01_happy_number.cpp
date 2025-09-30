// https://www.educative.io/interview-prep/coding/happy-number

int getNext(int num) {
    int res = 0;
    while (num > 0) {
        int rem = num % 10;
        num /= 10;
        res += (rem * rem);
    }
    return res;
}

bool IsHappyNumber(int n) {
    int slow = n, fast = n;

    do {
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    } while (fast != 1 && slow != fast);

    return fast == 1;
}