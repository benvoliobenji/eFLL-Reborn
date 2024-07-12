cmake_minimum_required(VERSION 3.27)

target_sources(${PROJECT_NAME}
    PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/Fuzzy.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/FuzzyComposition.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/FuzzyInput.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/FuzzyIO.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/FuzzyOutput.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/FuzzyRule.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/FuzzyRuleAntecedent.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/FuzzyRuleConsequent.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/FuzzySet.cpp"
)