import urllib.request
import urllib.error

# A list of test endpoints on our sample testing domain
urls_to_check = [
    "https://httpbin.org/headers",
    "https://httpbin.org/ip",
    "https://httpbin.org/status/200",
    "https://httpbin.org/status/404",
    "https://httpbin.org/status/403"
]

print("--- Starting Automated Endpoint Check ---")

for target_url in urls_to_check:
    try:
        req = urllib.request.Request(
            target_url, 
            headers={'User-Agent': 'Mozilla/5.0 (EducationalReconScript)'}
        )
        
        # Attempt to open the URL
        with urllib.request.urlopen(req) as response:
            print(f"[ACTIVE] {target_url} - Status Code: {response.status}")
            
    except urllib.error.HTTPError as e:
        # Handle server-side errors gracefully (like 404 or 403)
        print(f"[RESTRICTED/NOT FOUND] {target_url} - Status Code: {e.code}")
    except Exception as e:
        print(f"[ERROR] {target_url} - Error: {e}")

print("--- Scan Complete ---")