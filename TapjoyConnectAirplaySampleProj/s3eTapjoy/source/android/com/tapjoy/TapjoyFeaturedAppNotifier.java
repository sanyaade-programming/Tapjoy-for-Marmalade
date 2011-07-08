package com.tapjoy;

/**
 * 
 * Notifier class which sends callbacks whenever receiving Featured App data/response.
 *
 */
public interface TapjoyFeaturedAppNotifier
{
	/**
	 * Callback containing Featured App data.
	 * @param featuredAppObject			Object containing the Featured App data.
	 */
	public void getFeaturedAppResponse(TapjoyFeaturedAppObject featuredAppObject);
	
	
	/**
	 * Callback when there is no Featured App data returned from the server. 
	 * This may be called when there are no Featured Apps available.
	 * @param error						Error message.
	 */
	public void getFeaturedAppResponseFailed(String error);
}