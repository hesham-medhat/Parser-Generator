#ifndef PARSER_GENERATOR_GRAMMARSYMBOL_H
#define PARSER_GENERATOR_GRAMMARSYMBOL_H


#include <string>
#include <memory>
#include <deque>

class GrammarSymbol {
public:
    typedef std::shared_ptr<GrammarSymbol> ptr;
    typedef std::deque<GrammarSymbol::ptr> Production;
    enum Type {NonTerminal, Terminal};

    explicit GrammarSymbol(std::string name);

    virtual Type getType() = 0;
    std::string getName();
private:
    const std::string name;
};


#endif //PARSER_GENERATOR_GRAMMARSYMBOL_H