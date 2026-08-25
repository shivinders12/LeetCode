    while (temp != nullptr) {
        size++;
        temp = temp->next;
    }

  
    if (n == size) {
        return head->next;
    }

    temp = head;

    for (int i = 0; i < size - n - 1; i++) {
        temp = temp->next;
    }

    temp->next = temp->next->next;

    return head;
}
};
