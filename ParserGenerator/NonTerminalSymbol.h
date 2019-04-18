#ifndef PARSER_GENERATOR_NONTERMINAL_H
#define PARSER_GENERATOR_NONTERMINAL_H


#include <unordered_set>
#include <memory>
#include <deque>
#include "TerminalSymbol.h"
#include "GrammarSymbol.h"

class NonTerminalSymbol : public GrammarSymbol {
public:
    explicit NonTerminalSymbol(std::string name);

    std::unordered_set<std::shared_ptr<GrammarSymbol>> getFirst();
    std::unordered_set<std::shared_ptr<GrammarSymbol>> getFollow();

    void addProduction(GrammarSymbol::Production);
private:
    // Flag used during building process of the parser to indicate DSs are built
    bool built;
    bool hasEpsilonTransition;
    std::deque<GrammarSymbol::Production> productions;
};


#endif //PARSER_GENERATOR_NONTERMINAL_H