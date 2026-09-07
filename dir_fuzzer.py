import urllib.request
import urllib.error

# The target base URL (using a safe testing domain)
target_domain = "https://httpbin.org"

# A small wordlist of common paths to test
wordlist = [
    "admin",
    "login",
    "dashboard",
    "config",
    "secret-path",
    "api",
    "robots.txt"
]

print(f"--- Starting Directory Enumeration on {target_domain} ---")

for path in wordlist:
    full_url = f"{target_domain}/{path}"
    
    try:
        req = urllib.request.Request(
            full_url, 
            headers={'User-Agent': 'Mozilla/5.0 (EducationalFuzzer)'}
        )
        
        with urllib.request.urlopen(req) as response:
            print(f"[FOUND - 200 OK] {full_url}")
            
    except urllib.error.HTTPError as e:
        # If a page returns 404 Not Found, it means the directory likely doesn't exist
        if e.code == 404:
            # Uncomment the line below if you want to see failed attempts too
            # print(f"[NOT FOUND - 404] {full_url}")
            pass
        else:
            # Catch other codes like 403 Forbidden (which might indicate a hidden admin panel exists!)
            print(f"[INTERESTING - {e.code}] {full_url}")
            
    except Exception as e:
        pass

print("--- Enumeration Complete ---")