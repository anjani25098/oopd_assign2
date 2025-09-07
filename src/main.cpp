int main() {
    BibParser parser;
    Bibliography bib;

    parser.parseFile(std::string("sample.txt"));
    bib.display();

    return 0;
}
