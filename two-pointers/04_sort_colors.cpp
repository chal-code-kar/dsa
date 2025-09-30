// https://www.educative.io/interview-prep/coding/sort-colors

std::vector<int> SortColors(std::vector<int> colors) {
    int left = 0;
    int right = colors.size() - 1;
    int idx = 0;

    while (idx <= right) {
        if (colors[idx] == 0) {
            swap(colors[idx], colors[left]);
            ++left;
            ++idx;
        } else if (colors[idx] == 1) {
            ++idx;
        } else {
            swap(colors[idx], colors[right]);
            --right;
        }
    }

    return colors;
}
