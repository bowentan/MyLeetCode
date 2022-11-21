#!/bin/bash

answer_title_cpp="Answer codes: c++"
for dir in easy medium hard; do
    if [ ! -d "$dir" ]; then
        continue
    fi
    if [ ! -d "docs/$dir" ]; then
        mkdir docs/$dir
    fi
    for prob in "$dir"/*; do
        filename=$(basename "$prob")
        probname=${filename##*.}
        probname_rm_hyphen=${probname//-/ }
        doc_file="docs/$dir/$probname.rst"
        {
            echo "$probname_rm_hyphen"
            printf '=%.s' $(seq 1 ${#probname_rm_hyphen})
            echo -e "\n"
            echo "$answer_title_cpp"
            printf -- '-%.s' $(seq 1 ${#answer_title_cpp})
            echo -e "\n"
            echo ".. literalinclude:: ../../$dir/$probname/answer.cpp"
            echo "    :language: cpp"
            echo "    :linenos:"
        } >"$doc_file"
    done
done
