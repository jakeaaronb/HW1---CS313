#include <iostream>
#include <string>
using namespace std;

class VigCiph {
public:
	// A key is important for Vigenere Cipher, however there are methods of solving without a key
	string key;
	VigCiph(string key) {
		for (int i = 0; i < key.size(); ++i) {
			if (key[i] >= 'A' && key[i] <= 'Z')
				this->key += key[i];
			else if (key[i] >= 'a' && key[i] <= 'z')
				this->key += key[i] + 'A' - 'a';
		}
	}


	// We know for encryption : Ei = (Pi + Ki) (mod 26)
	string encryption(string e) {
		string out;
		for (int i = 0, j = 0; i < e.length(); ++i) {
			char c = e[i];
			if (c >= 'a' && c <= 'z')
				c += 'A' - 'a';
			else if (c < 'A' || c > 'Z')
				continue;
			out += (c + key[j] - 2 * 'A') % 26 + 'A';
			j = (j + 1) % key.length();
		}
		return out;

	}
	// We know for decryption : Pi = (Ei - Ki) (mod 26)
	string decryption(string d) {
		string out;
		for (int i = 0, j = 0; i < d.length(); ++i) {
			char c = d[i];
			if (c >= 'a' && c <= 'z')
				c += 'A' - 'a';
			else if (c < 'A' || c > 'Z')
				continue;
			out += (c - key[j] + 26) % 26 + 'A';
			j = (j + 1) % key.length();
		}
		return out;
	}
	int main() {
		VigCiph vc("somekindofmessage");
		string s = "somethingtomakethisgo";
		string encrypt = vc.encryption(s);
		string decrypt = vc.decryption(encrypt);
		cout << "Message: " << s << endl;
		cout << "Message Encrypted: " << encrypt << endl;
		cout << "Message Decrypted: " << decrypt << endl;

	}
};