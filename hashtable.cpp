string hashtable::get(k key)
{
    base = this->hash(key);
    for(delta = 0; delta < this->getSize(); ++delta)
    {
        int ind = (base + delta) % this->getSize();
        hashEntry<string, string>* entry = this->data[ind];
        if(entry == nullptr)
        {
            return "NOT_FOUND"; // tentar nullptr
        } else if(entry != deleted && entry->getKey()==key) // nos slides fala sobre o deleted
        {
            return entry->getValue();
        }
    }
    return "NOT_FOUND";
}