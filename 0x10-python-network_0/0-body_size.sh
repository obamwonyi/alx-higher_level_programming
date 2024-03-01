#!/bin/bash

# Sending a request to the URL provided as the first argument and counting the bytes of the response body
curl -s "$1" | wc -c
