import subprocess
import threading
import time

def run_command(command):
    process = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
    output, error = process.communicate()
    return output, error

def close_alcatraz():
    time.sleep(12)  # Wait for 12 seconds
    run_command('taskkill /F /IM alcatraz.exe')

def main():
    command_run = 'alcatraz.exe cs_usermode.exe'
    
    # Start a new thread to close alcatraz.exe after 12 seconds
    close_thread = threading.Thread(target=close_alcatraz)
    close_thread.start()

    # Run the command
    subprocess.Popen(command_run, shell=True)

if __name__ == "__main__":
    main()
