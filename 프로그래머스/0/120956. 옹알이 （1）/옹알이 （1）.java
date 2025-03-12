class Solution {
    public int solution(String[] babbling) {
		String[] babySay = {"aya", "ye", "woo", "ma"};
		int cnt = 0;
		for(String bab : babbling) {
			for(String say : babySay) {
				if(bab.contains(say)) {
					bab = bab.replaceAll(say, ",");
					if(bab.replaceAll(",", "").isEmpty()) cnt++;
				}
			}
		}
		return cnt;
    }
}