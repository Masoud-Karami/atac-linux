#!/bin/bash
# Run make and capture only the errors, then convert to JSON
make 2>&1 | grep "error:" | while read -r line; do
    FILE=$(echo $line | cut -d: -f1)
    LINE=$(echo $line | cut -d: -f2)
    MSG=$(echo $line | cut -d: -f4-)
    
    echo "{"
    echo "  \"timestamp\": \"$(date -u +"%Y-%m-%dT%H:%M:%SZ")\","
    echo "  \"level\": \"ERROR\","
    echo "  \"file\": \"$FILE\","
    echo "  \"line\": $LINE,"
    echo "  \"message\": \"${MSG# }\","
    echo "  \"type\": \"CompilationError\""
    echo "}" > error_log.json
done

# To run it: chmod +x parse_errors.sh && ./parse_errors.sh